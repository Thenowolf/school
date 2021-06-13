Goal
* Create text files processing script - 3h

Description
1. Get wsfrontend and wsbackend properties values and replace content of the name property in <testsuite> tag in the TestResults.xml
2. Read browser version from Chrome64_76.0.3809.xml file name and get OS version by including machines.txt in the script.
3. Replace original:
name="T[T101001.AboutInfo]" classname="util.Runner"
with
name="T101001.AboutInfo" classname="Win7-64.Chrome64_76.0.3809.Family01"
in each <testcase> in TestResults.xml

Acceptance criteria
* Script created
* Source code versioned and documented
* Tool up and running on the test server

documentation
* https://www.well.ox.ac.uk/~johnb/comp/unix/ksh.html
* https://bluescreenofjeff.com/2017-10-03-f-awk-yeah-advanced-sed-and-awk-usage-parsing-for-pentesters-3/