create table outerdaf
(
  oteshosp    char(3) default ' ' not null,
  otespypn    char(8) default ' ' not null,
  otesprun    char(4) default ' ' not null,
  otespdat    char(8) default ' ' not null,
  otesclid    char(6) default ' ' not null,
  otescdat    char(8) default ' ' not null,
  otesclbp    char(9) default ' ' not null,
  otesclca    char(9) default ' ' not null,
  otestrid    char(24) default ' ' not null,
  otesrkey    char(24) default ' ' not null,
  otesstat    char(1) default ' ' not null,
  otesltyp    char(2) default ' ' not null,
  otesspar    char(100) default ' ' not null,
  lf          char(1)
);
create unique index outerda1 on outerdaf
(
oteshosp,
otespypn,
otesprun,
otespdat,
otesclid,
otestrid
);
create unique index outerda2 on outerdaf
(
otestrid,
oteshosp,
otespypn,
otesprun,
otespdat,
otesclid
);
create unique index outerda3 on outerdaf
(
otesrkey,
oteshosp,
otespypn,
otesprun,
otespdat,
otesclid,
otestrid
);
revoke all on outerdaf from public ; 
grant select on outerdaf to public ; 
