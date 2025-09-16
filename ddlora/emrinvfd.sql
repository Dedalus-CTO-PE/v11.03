create table emrinvaf
(
  eminadmn    varchar2(8) default ' ' not null,
  eminrtyp    varchar2(2) default ' ' not null,
  eminrnum    varchar2(3) default ' ' not null,
  eminludt    varchar2(8) default ' ' not null,
  eminlutm    varchar2(6) default ' ' not null,
  eminmcod    varchar2(10) default ' ' not null,
  eminmdat    varchar2(8) default ' ' not null,
  eminmtim    varchar2(6) default ' ' not null,
  eminref1    varchar2(50) default ' ' not null,
  eminref2    varchar2(50) default ' ' not null,
  emincod1    varchar2(3) default ' ' not null,
  emincod2    varchar2(3) default ' ' not null,
  emincod3    varchar2(3) default ' ' not null,
  emincod4    varchar2(3) default ' ' not null,
  emindat1    varchar2(8) default ' ' not null,
  emindat2    varchar2(8) default ' ' not null,
  emintim1    varchar2(5) default ' ' not null,
  emintim2    varchar2(5) default ' ' not null,
  eminamt1    number(14,2) default 0 not null,
  eminamt2    number(14,2) default 0 not null,
  eminyn01    varchar2(1) default ' ' not null,
  eminyn02    varchar2(1) default ' ' not null,
  eminyn03    varchar2(1) default ' ' not null,
  eminyn04    varchar2(1) default ' ' not null,
  eminspar    varchar2(80) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint emrinva1 primary key( 
eminadmn,
eminrtyp,
eminrnum)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
