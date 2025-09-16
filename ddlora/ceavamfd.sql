create table ceavamaf
(
  cevadoc     varchar2(6) default ' ' not null,
  cevaspc     varchar2(3) default ' ' not null,
  cevapsc     varchar2(7) default ' ' not null,
  cevaqty     number(8,2) default 0 not null,
  cevaspa     varchar2(20) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint ceavama1 primary key( 
cevadoc,
cevaspc,
cevapsc)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
