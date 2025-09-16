create table reshebaf
(
  rehbrdt     varchar2(8) default ' ' not null,
  rehbrtm     varchar2(5) default ' ' not null,
  rehbrun     varchar2(4) default ' ' not null,
  rehblin     varchar2(3) default ' ' not null,
  rehbtxt     varchar2(127) default ' ' not null,
  rehbspa     varchar2(10) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint resheba1 primary key( 
rehbrdt,
rehbrtm,
rehbrun,
rehblin)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
