from fabric.api import *


@task
def demo01():
    with settings(warn_only=True):
        local("cd ../ && ls")
        local("pwd")
        local("ls")
