#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <time.h>


void readM(char *FNAME, double *data, int M, int N, char* format)
{
	int   j,          i; double *index;
	FILE            *f; double temp;
		if ((f = (FILE *)fopen(FNAME, "r")) == NULL) {
		perror("io2: error in opening auxiliary files");
		exit(1);
	}
	for (i = 0; i < M; i++) {
		index = data + N*i;
		for (j = 0; j < N; j++) {
			fscanf(f, "%lf", &temp );
			*(index + j) = temp;
	
		}
	}
	
	fclose(f);
}


void readM_int(char *FNAME, int *data, int M, int N, char* format)
{
	int   j, i; int *index;
	FILE            *f; int temp;
		if ((f = (FILE *)fopen(FNAME, "r")) == NULL) {
		perror("io2: error in opening auxiliary files");
		exit(1);
	}
	for (i = 0; i < M; i++) {
		index = data + N*i ;
		for (j = 0; j < N; j++) {
			fscanf(f, "%d", &temp);
			*(index + j) = temp;	
		}
	}
	fclose(f);
}


void loaddistri()
{
	char *FNAME;
	FNAME = strcat(strcpy(fullpath, outputdir), "invDisSingleAfterR.txt");
	readM(FNAME, &invDisSingleAfterR[0][0][0], 2 * TRDIM*HSDIM, ADIM*YDIM, "%15.12lf");
	FNAME = strcat(strcpy(fullpath, outputdir), "invDisSingleBeforeR.txt");
	readM(FNAME, &invDisSingleBeforeR[0][0][0], 2 * TWDIM*INCOMEDIM, ADIM*YDIM, "%15.12lf");
	FNAME = strcat(strcpy(fullpath, outputdir), "invDisSingleEarlyRetiree.txt");
	readM(FNAME, &invDisSingleEarlyRetiree[0][0][0], 2 * TERDIM*HSDIM, ADIM*YDIM, "%15.12lf");
	FNAME = strcat(strcpy(fullpath, outputdir), "invDisSingleEarlyRWorking.txt");
	readM(FNAME, &invDisSingleEarlyRWorking[0][0][0], 2 * TERDIM*INCOMEDIM, ADIM*YDIM, "%15.12lf");
	FNAME = strcat(strcpy(fullpath, outputdir), "invDisSingleEarlyR.txt");
	readM(FNAME, &invDisSingleEarlyR[0][0][0], 2 * TERDIM*INCOMEDIM, ADIM*YDIM, "%15.12lf");

	if (hasCouples == 1) {
		FNAME = strcat(strcpy(fullpath, outputdir), "invDisCoupleEarlyR.txt");
		readM(FNAME, &invDisCoupleEarlyR[0][0][0][0], TERDIM*INCOMEDIM*INCOMEDIM*ADIM, YDIM*YDIM, "%15.12lf");
		FNAME = strcat(strcpy(fullpath, outputdir), "invDisCoupleEarlyRetiree.txt");
		readM(FNAME, &invDisCoupleEarlyRetiree[0][0], TERDIM*ADIM, YDIM*YDIM, "%15.12lf");
		FNAME = strcat(strcpy(fullpath, outputdir), "invDisCoupleEarlyRWorking.txt");
		readM(FNAME, &invDisCoupleEarlyRWorking[0][0][0][0], TERDIM*INCOMEDIM*INCOMEDIM*ADIM, YDIM*YDIM, "%15.12lf");
		FNAME = strcat(strcpy(fullpath, outputdir), "invDisCoupleAfterR.txt");
		readM(FNAME, &invDisCoupleAfterR[0][0][0][0], TRDIM*HSDIM*HSDIM*ADIM, YDIM*YDIM, "%15.12lf");
		FNAME = strcat(strcpy(fullpath, outputdir), "invDisCoupleBeforeR.txt");
		readM(FNAME, &invDisCoupleBeforeR[0][0][0][0], TWDIM*INCOMEDIM*INCOMEDIM*ADIM, YDIM*YDIM, "%15.12lf");
	}
}
void loadpolicy()
{
	char *FNAME;
	double sum, total;
	int genderInd, tInd, iInd, aInd, yInd, hsInd;	
	int  iInd0, iInd1, yInd0, hsInd0, yInd1, hsInd1;

	FILE *paraP;
	FNAME = strcat(strcpy(fullpath, outputdir), "claimingSingleEarlyR.txt");
	readM_int(FNAME, &claimingSingleEarlyR[0][0][0], 2 * TERDIM*INCOMEDIM, ADIM*YDIM, "%3d");

	FNAME = strcat(strcpy(fullpath, outputdir), "assetNextSingleEarlyRetiree_ind.txt");
	readM_int(FNAME, &assetNextSingleEarlyRetiree_ind[0][0], 2 * TERDIM, ADIM*YDIM, "%4d");
	FNAME = strcat(strcpy(fullpath, outputdir), "consumptionSingleEarlyRetiree.txt");
	readM(FNAME, &consumpSingleEarlyRetiree[0][0], 2 * TERDIM, ADIM*YDIM, "%10.0lf");

	FNAME = strcat(strcpy(fullpath, outputdir), "assetNextSingleAfterR_ind.txt");
	readM_int(FNAME, &assetNextSingleAfterR_ind[0][0][0], 2 * TRDIM*HSDIM, ADIM*YDIM, "%4d");
		FNAME = strcat(strcpy(fullpath, outputdir), "consumptionSingleAfterR.txt");
	readM(FNAME, &consumpSingleAfterR[0][0][0], 2 * TRDIM*HSDIM, ADIM*YDIM, "%10.0lf");

	

	if (switchtrsanfer == 1) {
		FNAME = strcat(strcpy(fullpath, outputdir), "transferSingleAfterR.txt");
		readM(FNAME, &transferSingleAfterR[0][0][0], 2 * TRDIM*HSDIM, ADIM*YDIM, "%7.0lf");
	}

	FNAME = strcat(strcpy(fullpath, outputdir), "consumptionSingleBeforeR.txt");
	readM(FNAME, &consumpSingleBeforeR[0][0][0], 2 * TWDIM*INCOMEDIM, ADIM*YDIM, "%9.0lf");



	FNAME = strcat(strcpy(fullpath, outputdir), "hoursSingleBeforeR.txt");
readM_int(FNAME, &hoursSingleBeforeR_ind[0][0][0], 2 * TWDIM*INCOMEDIM, ADIM*YDIM, "%3d");

	FNAME = strcat(strcpy(fullpath, outputdir), "assetNextSingleBeforeR_ind.txt");
	readM_int(FNAME, &assetNextSingleBeforeR_ind[0][0][0], 2 * TWDIM*INCOMEDIM, ADIM*YDIM, "%4d");

	
	for (genderInd = 0; genderInd < 2; genderInd++)
	{
		for (tInd = 0; tInd < TWDIM; tInd++)
		{
			for (iInd = 0; iInd < INCOMEDIM; iInd++)
			{
				for (yInd = 0; yInd < YDIM; yInd++)
				{
					for (aInd = 0; aInd < ADIM; aInd++)
					{
						hoursSingleBeforeR[genderInd][tInd][iInd][aInd][yInd] = hoursA[genderInd][tInd][hoursSingleBeforeR_ind[genderInd][tInd][iInd][aInd][yInd]];
					}
				}
			}
		}
	}

	FNAME = strcat(strcpy(fullpath, outputdir), "consumptionSingleEarlyRWorking.txt");
	readM(FNAME, &consumpSingleEarlyRWorking[0][0][0], 2 * TERDIM*INCOMEDIM, ADIM*YDIM, "%9.0lf");
	
	

	FNAME = strcat(strcpy(fullpath, outputdir), "hoursSingleEarlyRWorking.txt");
	readM_int(FNAME, &hoursSingleEarlyRWorking_ind[0][0][0], 2 * TERDIM*INCOMEDIM, ADIM*YDIM, "%3d");
	FNAME = strcat(strcpy(fullpath, outputdir), "assetNextSingleEarlyRWorking_ind.txt");
	readM_int(FNAME, &assetNextSingleEarlyRWorking_ind[0][0][0], 2 * TERDIM*INCOMEDIM, ADIM*YDIM, "%4d");


	for (genderInd = 0; genderInd < 2; genderInd++)
	{
		for (tInd = 0; tInd < TERDIM; tInd++)
		{
			for (iInd = 0; iInd < INCOMEDIM; iInd++)
			{
				for (yInd = 0; yInd < YDIM; yInd++)
				{
					for (aInd = 0; aInd < ADIM; aInd++)
					{
						hoursSingleEarlyRWorking[genderInd][tInd][iInd][aInd][yInd] = hoursA[genderInd][tInd+TWDIM][hoursSingleEarlyRWorking_ind[genderInd][tInd][iInd][aInd][yInd]];
					}
				}
			}
		}
	}

	if (hasCouples == 1) {
		
		
		

		if (switchIncomeTax == 1) {
			
			
		}
		if (switchtrsanfer == 1) {
			FNAME = strcat(strcpy(fullpath, outputdir), "transferCoupleAfterR.txt");
			readM(FNAME, &transferCoupleAfterR[0][0][0][0], TRDIM*HSDIM*HSDIM*ADIM, YDIM*YDIM, "%6.0lf");
		}

	FNAME = strcat(strcpy(fullpath, outputdir), "consumptionCoupleAfterR.txt");
	readM(FNAME, &consumpCoupleAfterR[0][0][0][0], TRDIM*HSDIM*HSDIM*ADIM, YDIM*YDIM, "%10.0lf");
		FNAME = strcat(strcpy(fullpath, outputdir), "assetNextCoupleAfterR_ind.txt");
		readM_int(FNAME, &assetNextCoupleAfterR_ind[0][0][0][0], TRDIM*HSDIM*HSDIM*ADIM, YDIM*YDIM, "%4d");		

		FNAME = strcat(strcpy(fullpath, outputdir), "consumptionCoupleEarlyRetiree.txt");
		readM(FNAME, &consumpCoupleEarlyRetiree[0][0], TERDIM*ADIM, YDIM*YDIM, "%10.0lf");
		FNAME = strcat(strcpy(fullpath, outputdir), "assetNextCoupleEarlyRetiree_ind.txt");
		readM_int(FNAME, &assetNextCoupleEarlyRetiree_ind[0][0], TERDIM*ADIM, YDIM*YDIM, "%4d");
	
		FNAME = strcat(strcpy(fullpath, outputdir), "consumptionCoupleBeforeR.txt");
		readM(FNAME, &consumpCoupleBeforeR[0][0][0][0], TWDIM*INCOMEDIM*INCOMEDIM*ADIM, YDIM*YDIM, "%9.0lf");
		FNAME = strcat(strcpy(fullpath, outputdir), "assetNextCoupleBeforeR_ind.txt");
		readM_int(FNAME, &assetNextCoupleBeforeR_ind[0][0][0][0], TWDIM*INCOMEDIM*INCOMEDIM*ADIM, YDIM*YDIM, "%4d");
		FNAME = strcat(strcpy(fullpath, outputdir), "hoursCoupleBeforeRMale.txt");
		readM_int(FNAME, &hoursCoupleBeforeRMale_ind[0][0][0][0], TWDIM*INCOMEDIM*INCOMEDIM*ADIM, YDIM*YDIM, "%3d");
		FNAME = strcat(strcpy(fullpath, outputdir), "hoursCoupleBeforeRFemale.txt");
		readM_int(FNAME, &hoursCoupleBeforeRFemale_ind[0][0][0][0], TWDIM*INCOMEDIM*INCOMEDIM*ADIM, YDIM*YDIM, "%3d");







		FNAME = strcat(strcpy(fullpath, outputdir), "consumptionCoupleEarlyRWorking.txt");
		readM(FNAME, &consumpCoupleEarlyRWorking[0][0][0][0], TERDIM*INCOMEDIM*INCOMEDIM*ADIM, YDIM*YDIM, "%9.0lf");
		FNAME = strcat(strcpy(fullpath, outputdir), "assetNextCoupleEarlyRWorking_ind.txt");
		readM_int(FNAME, &assetNextCoupleEarlyRWorking_ind[0][0][0][0], TERDIM*INCOMEDIM*INCOMEDIM*ADIM, YDIM*YDIM, "%4d");
		FNAME = strcat(strcpy(fullpath, outputdir), "hoursCoupleEarlyRWorkingMale.txt");
		readM_int(FNAME, &hoursCoupleEarlyRWorkingMale_ind[0][0][0][0], TERDIM*INCOMEDIM*INCOMEDIM*ADIM, YDIM*YDIM, "%3d");
		FNAME = strcat(strcpy(fullpath, outputdir), "hoursCoupleEarlyRWorkingFemale.txt");
		readM_int(FNAME, &hoursCoupleEarlyRWorkingFemale_ind[0][0][0][0], TERDIM*INCOMEDIM*INCOMEDIM*ADIM, YDIM*YDIM, "%3d");

		FNAME = strcat(strcpy(fullpath, outputdir), "claimingCoupleEarlyR.txt");
		readM_int(FNAME, &claimingCoupleEarlyR[0][0][0][0], TERDIM*INCOMEDIM*INCOMEDIM*ADIM, YDIM*YDIM, "%3d");
	}

}

