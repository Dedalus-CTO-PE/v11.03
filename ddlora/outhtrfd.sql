create table outhtraf
(
  othtnumb    varchar2(8) default ' ' not null,
  othtinvn    varchar2(8) default ' ' not null,
  othttran    varchar2(6) default ' ' not null,
  othtdesc    varchar2(30) default ' ' not null,
  othtamtt    number(14,2) default 0 not null,
  othtdate    varchar2(8) default ' ' not null,
  othtitem    varchar2(9) default ' ' not null,
  othtttyp    varchar2(2) default ' ' not null,
  othtptyp    number(1,0) default 0 not null,
  othtrecp    varchar2(12) default ' ' not null,
  othtiprt    number(1,0) default 0 not null,
  othtrtyp    varchar2(1) default ' ' not null,
  othtmgrp    varchar2(3) default ' ' not null,
  othtdtyp    varchar2(3) default ' ' not null,
  othtbatc    varchar2(8) default ' ' not null,
  othtppor    number(14,2) default 0 not null,
  othtrpor    number(14,2) default 0 not null,
  othtninv    varchar2(1) default ' ' not null,
  othtserv    number(5,0) default 0 not null,
  othtgsta    number(1,0) default 0 not null,
  othtgstc    varchar2(6) default ' ' not null,
  othtgstm    number(14,2) default 0 not null,
  othteffd    varchar2(8) default ' ' not null,
  othtcrst    varchar2(1) default ' ' not null,
  othtbtch    varchar2(16) default ' ' not null,
  othtpcod    varchar2(3) default ' ' not null,
  othtacao    varchar2(1) default ' ' not null,
  othtdsro    varchar2(1) default ' ' not null,
  othtsrtx    varchar2(50) default ' ' not null,
  othtlspn    varchar2(6) default ' ' not null,
  othtmpro    varchar2(1) default ' ' not null,
  othtnpat    varchar2(2) default ' ' not null,
  othtsfdm    varchar2(3) default ' ' not null,
  othttdur    varchar2(3) default ' ' not null,
  othtncat    varchar2(3) default ' ' not null,
  othtpinv    varchar2(8) default ' ' not null,
  othtptrn    varchar2(6) default ' ' not null,
  othtspar    varchar2(52) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint outhtra1 primary key( 
othtnumb,
othtinvn,
othttran)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index outhtra2 on outhtraf
(
othtnumb,
othtpinv,
othtptrn,
othtinvn,
othttran
)
  tablespace pas_indx; 
