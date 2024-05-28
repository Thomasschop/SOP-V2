data = dlmread('air_flow.txt'); %read the data from the file velocity_air

time = data(:,1); %the first column is time
velocity = data(:,2); %the second column is velocity

%plot the graph 
plot(time, velocity, "black"); 
xlabel("Time (seconds)");
ylabel("air flow (m^3/s)");
title("Measured Air flow");
grid on;
