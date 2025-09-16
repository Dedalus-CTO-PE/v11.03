create table outhtraf
(
  othtnumb    char(8) default ' ' not null,
  othtinvn    char(8) default ' ' not null,
  othttran    char(6) default ' ' not null,
  othtdesc    char(30) default ' ' not null,
  othtamtt    decimal(14,2) default 0 not null,
  othtdate    char(8) default ' ' not null,
  othtitem    char(9) default ' ' not null,
  othtttyp    char(2) default ' ' not null,
  othtptyp    decimal(1,0) default 0 not null,
  othtrecp    char(12) default ' ' not null,
  othtiprt    decimal(1,0) default 0 not null,
  othtrtyp    char(1) default ' ' not null,
  othtmgrp    char(3) default ' ' not null,
  othtdtyp    char(3) default ' ' not null,
  othtbatc    char(8) default ' ' not null,
  othtppor    decimal(14,2) default 0 not null,
  othtrpor    decimal(14,2) default 0 not null,
  othtninv    char(1) default ' ' not null,
  othtserv    decimal(5,0) default 0 not null,
  othtgsta    decimal(1,0) default 0 not null,
  othtgstc    char(6) default ' ' not null,
  othtgstm    decimal(14,2) default 0 not null,
  othteffd    char(8) default ' ' not null,
  othtcrst    char(1) default ' ' not null,
  othtbtch    char(16) default ' ' not null,
  othtpcod    char(3) default ' ' not null,
  othtacao    char(1) default ' ' not null,
  othtdsro    char(1) default ' ' not null,
  othtsrtx    char(50) default ' ' not null,
  othtlspn    char(6) default ' ' not null,
  othtmpro    char(1) default ' ' not null,
  othtnpat    char(2) default ' ' not null,
  othtsfdm    char(3) default ' ' not null,
  othttdur    char(3) default ' ' not null,
  othtncat    char(3) default ' ' not null,
  othtpinv    char(8) default ' ' not null,
  othtptrn    char(6) default ' ' not null,
  othtspar    char(52) default ' ' not null,
  lf          char(1)
);
create unique index outhtra1 on outhtraf
(
othtnumb,
othtinvn,
othttran
);
create unique index outhtra2 on outhtraf
(
othtnumb,
othtpinv,
othtptrn,
othtinvn,
othttran
);
revoke all on outhtraf from public ; 
grant select on outhtraf to public ; 
