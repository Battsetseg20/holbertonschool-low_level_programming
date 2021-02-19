<p align="center">
  <img width="409" height="128" src="https://www.holbertonschool.com/holberton-logo.png">
</p>

# Makefile

## Learning Objectives
**What are `make`, Makefiles**

Useful for managing big programs, `make` determines automatically which pieces of a program need to be recompiled, and issues the commands to recompile them. The `make` is used with any programming language whose compiler can be run with a shell command. This project will be limited its use to C language. *Makefile* is a collection of rules.

Type `make` in a directory that has a file called "Makefile".  You can also type `make -f <makefile>` to use a different filename.

**When, why and how to use Makefiles**

A file called a *makefile* to tell `make` what to do. Most often, the makefile tells make how to compile and link a program.This only has to be done once, except when new modules are added to the program, the Makefile must be updated to add new module dependencies to existing rules and to add new rules to build the new modules.
The makefile can also tell `make` how to run miscellaneous commands when explicitly asked.

**What are a rules and how to set and use them**

A *rule* appears in the makefile and says when and how to remake certain files, called rule's *target* ( executible or object files). It lists the other files (files that are used as input to create target) that are the *prerequisites* of the target, and the *recipe* (action that make carries out) to use to create or update the target. While the target is required, the prerequisites are optional.
 A rule:
```
 <target>: <prerequisites...>
	    <command>
	    <command>
	    ...
```
**What are explicit and implicit rules**

- An explicit rule says when and how to remake one or more files, called the rule’s targets. It lists the other files that the targets depend on, called the prerequisites of the target, and may also give a recipe to use to create or update the targets

- An implicit rule says when and how to remake a class of files based on their names. It describes how a target may depend on a file with a name similar to the target and gives a recipe to create or update such a target.

**What are the most common / useful rules**

**What are variables and how to set and use them**

A variable is a name defined in a makefile to represent a string of text, called the variable’s value. These values are substituted by explicit request into targets, prerequisites, recipes, and other parts of the makefile.

It is standard practice for every makefile to have a variable named objects, OBJECTS, objs, OBJS, obj, or OBJ which is a list of all object file names.

To set a variable from the makefile, write a line starting with the variable name followed by ‘=’, ‘:=’, or ‘::=’. Whatever follows the ‘=’, ‘:=’, or ‘::=’ on the line becomes the value. For example,
```
objects = main.o foo.o bar.o utils.o
```
defines a variable named objects. Whitespace around the variable name and immediately after the ‘=’ is ignored.
Each line of the command list is run as a separate invocation of the shell.So, if you set a variable, it won't be available in the next line!


**Ressource**

https://www.gnu.org/software/make/manual/make.html

https://gist.github.com/isaacs/62a2d1825d04437c6f08

https://stackoverflow.com/questions/2145590/what-is-the-purpose-of-phony-in-a-makefile/2145605

https://www.gnu.org/software/make/manual/html_node/Phony-Targets.html#Phony-Targets
