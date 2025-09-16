create table sincidaf
(
  siidcat     varchar2(7) default ' ' not null,
  siidsup     varchar2(5) default ' ' not null,
  siidlin     varchar2(3) default ' ' not null,
  siidcom     varchar2(78) default ' ' not null,
  siidspa     varchar2(10) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint sincida1 primary key( 
siidcat,
siidsup,
siidlin)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
