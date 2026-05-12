from setuptools import find_packages
from setuptools import setup

setup(
    name='sfr_coursework2_interface_package',
    version='0.0.0',
    packages=find_packages(
        include=('sfr_coursework2_interface_package', 'sfr_coursework2_interface_package.*')),
)
