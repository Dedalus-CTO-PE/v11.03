create table oprdlvaf
(
  opdvdoct    varchar2(6) default ' ' not null,
  opdvfdte    varchar2(8) default ' ' not null,
  opdvtdte    varchar2(8) default ' ' not null,
  opdvreas    varchar2(3) default ' ' not null,
  opdvlast    varchar2(8) default ' ' not null,
  opdvspar    varchar2(30) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint oprdlva1 primary key( 
opdvdoct,
opdvfdte)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
