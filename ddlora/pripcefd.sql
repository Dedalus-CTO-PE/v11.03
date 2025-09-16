create table pripceaf
(
  prpcftyp    varchar2(1) default ' ' not null,
  prpcdoct    varchar2(10) default ' ' not null,
  prpcfcod    varchar2(17) default ' ' not null,
  prpcport    varchar2(3) default ' ' not null,
  prpcpcen    number(5,2) default 0 not null,
  prpcdsec    varchar2(5) default ' ' not null,
  prpcresp    varchar2(4) default ' ' not null,
  prpcledg    varchar2(2) default ' ' not null,
  prpccrac    varchar2(12) default ' ' not null,
  prpcdbac    varchar2(12) default ' ' not null,
  prpcspar    varchar2(40) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint pripcea1 primary key( 
prpcftyp,
prpcdoct,
prpcfcod,
prpcport)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
