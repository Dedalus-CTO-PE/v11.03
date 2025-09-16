create table sinsvbaf
(
  sivbcod     varchar2(4) default ' ' not null,
  sivblin     varchar2(3) default ' ' not null,
  sivbcom     varchar2(60) default ' ' not null,
  sivbspa     varchar2(20) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint sinsvba1 primary key( 
sivbcod,
sivblin)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
