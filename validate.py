from cerberus import Validator
import yaml

# Load the schema
with open("schema.yaml", "r") as f:
    schema = yaml.safe_load(f)

# Load the data
with open("test.yaml", "r") as f:
    document = yaml.safe_load(f)

# Validate the data
print(schema['readme'])
#software = schema['software']
#software['components']['schema'] = software
#schema['readme']['schema']['software_requirements']['schema']['components']['schema'] = software
v = Validator(schema['readme'])
if not v.validate(document):
    print(v.errors)