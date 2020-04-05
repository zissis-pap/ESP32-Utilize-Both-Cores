<h1>ESP32_Utilize_Both_Cores</h1>
<h3>About this project</h3>
<i>Not a project actually...</i><br>
<p>The ESP32 is an affordable <b>Dual-Core</b>, 32bit microcontroller that can be programmed through the Arduino framework. By default, <b>the Arduino framework runs the code on core 1</b> and as a result, the <b>second core</b> (core 0) remains <b>unutilized</b>. In order to use the second core, a task must be explicitly created that will bind a function to core 0. This function can then be constructed appropriately to simulate the loop() function. This project accomplishes just that, it practically implements two loop() functions that each runs on a separate core.</p>

<img src = "https://user-images.githubusercontent.com/11696874/78470885-6cc45680-7735-11ea-913f-6fce72890a00.JPG">

<h4>Notes</h4>
  If the microcontroller keeps restarting after enabling core 0, please consider using a 10ms delay in the while(1) loop of the core0 function.
