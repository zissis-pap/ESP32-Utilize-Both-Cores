<h1>ESP32_Utilize_Both_Cores</h1>
<h3>About this project</h3>
<i>Not a project actually...</i><br>
<p>The ESP32 is an affordable <b>Dual-Core</b>, 32bit microcontroller that can be programmed through the Arduino framework. By default, <b>the Arduino framework runs the code on core 1</b> and as a result, the <b>second core</b> (core 0) remains <b>unutilized</b>. In order to use the second core, a task must be created explicitly that will bind a function to core 0. This function can then be constructed appropriately to simulate the loop() function. This project accomplishes just that, it practically implements two loop() functions that each runs on a separate core.</p>
