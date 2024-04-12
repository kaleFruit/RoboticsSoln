from setuptools import find_packages
from setuptools import setup

setup(
    name='robotic_sol_interfaces',
    version='0.0.0',
    packages=find_packages(
        include=('robotic_sol_interfaces', 'robotic_sol_interfaces.*')),
)
