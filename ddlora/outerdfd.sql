create table outerdaf
(
  oteshosp    varchar2(3) default ' ' not null,
  otespypn    varchar2(8) default ' ' not null,
  otesprun    varchar2(4) default ' ' not null,
  otespdat    varchar2(8) default ' ' not null,
  otesclid    varchar2(6) default ' ' not null,
  otescdat    varchar2(8) default ' ' not null,
  otesclbp    varchar2(9) default ' ' not null,
  otesclca    varchar2(9) default ' ' not null,
  otestrid    varchar2(24) default ' ' not null,
  otesrkey    varchar2(24) default ' ' not null,
  otesstat    varchar2(1) default ' ' not null,
  otesltyp    varchar2(2) default ' ' not null,
  otesspar    varchar2(100) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint outerda1 primary key( 
oteshosp,
otespypn,
otesprun,
otespdat,
otesclid,
otestrid)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index outerda2 on outerdaf
(
otestrid,
oteshosp,
otespypn,
otesprun,
otespdat,
otesclid
)
  tablespace pas_indx; 
create unique index outerda3 on outerdaf
(
otesrkey,
oteshosp,
otespypn,
otesprun,
otespdat,
otesclid,
otestrid
)
  tablespace pas_indx; 
