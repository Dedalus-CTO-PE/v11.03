create table outmroaf
(
  dotmoadm    varchar2(8) default ' ' not null,
  dotmorec    varchar2(2) default ' ' not null,
  otmocode    varchar2(9) default ' ' not null,
  otmoodat    varchar2(8) default ' ' not null,
  otmoostm    varchar2(8) default ' ' not null,
  otmooetm    varchar2(8) default ' ' not null,
  otmodate    varchar2(8) default ' ' not null,
  otmotime    varchar2(8) default ' ' not null,
  otmouser    varchar2(4) default ' ' not null,
  otmospar    varchar2(26) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint outmroa1 primary key( 
dotmoadm,
dotmorec)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index outmroa2 on outmroaf
(
otmocode,
dotmoadm,
dotmorec
)
  tablespace pas_indx; 
