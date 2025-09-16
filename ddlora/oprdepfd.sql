create table oprdepaf
(
  opdedate    varchar2(6) default ' ' not null,
  opdedept    varchar2(3) default ' ' not null,
  opdencas    number(6,0) default 0 not null,
  opdenopr    number(6,0) default 0 not null,
  opdespar    varchar2(10) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint oprdepa1 primary key( 
opdedate,
opdedept)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
