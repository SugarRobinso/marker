# Project structure

### Siti da cui attingo per gestire struttura e stabilire le convenzioni

[Origine](https://rigtorp.se/cpp-best-practices/)<br>
[PitchFork Layout (PFL)](https://api.csswg.org/bikeshed/?force=1&url=https://raw.githubusercontent.com/vector-of-bool/pitchfork/develop/data/spec.bs)<br>
[Markdown](https://www.markdownguide.org/extended-syntax/)<br>
[Markdown-emoji](https://gist.github.com/rxaviers/7360908)<br>

### Directory Top-level

|	Dir name	|	Description			|	Required	|
|	:---		|		:----:			|		---:	|
|	*build*		|	build results		|	:x:			|
|	*include*	|	public API headers	|	:eyes:		|
|	*src*		|	compilable source	|	:eyes:		|
|	*libs*		|	project submodules	|	:eyes:		|
|	*tools*		|	dev utilities		|	:x:			|
|	*docs*		|	documentation		|	:x:			|
|	*tests*		|	test directory		|	:x:			|
|	*data*		|	non-source code		|	:x:			|
|	*examples*	|	samples & examples	|	:x:			|
|	*external*	|	projects to be used	|	:x:			|
|	*extras* 	|	extra submodules	|	:x:			|


prj_name(root)<br>
>&#09500;&#09472;
>prj_name(subdir)<br>
>>>&#09500;&#09472;
src<br>
>>>&#09500;&#09472;
include<br>
>>>&#09500;&#09472;
tests<br>
>>>&#09500;&#09472;
docs<br>
>>>&#09500;&#09472;
data<br>
>>>&#09492;&#09472;
examples<br>




&#09484;<br>
&#09474;<br>
&#09500; &#09472;<br>
&#09492;<br>
