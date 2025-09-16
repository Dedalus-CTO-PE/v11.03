create table outoccaf
(
  occsite     varchar2(6) default ' ' not null,
  occgrup     varchar2(3) default ' ' not null,
  occtype     varchar2(6) default ' ' not null,
  occdate     varchar2(6) default ' ' not null,
  occnumb     number(8,0) default 0 not null,
  occspar     varchar2(20) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint outocca1 primary key( 
occsite,
occgrup,
occtype,
occdate)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
