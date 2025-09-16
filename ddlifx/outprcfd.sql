create table outprcaf
(
  otproutn    char(8) default ' ' not null,
  otprcode    char(9) default ' ' not null,
  otprdesc    char(70) default ' ' not null,
  otprcod2    char(9) default ' ' not null,
  otprdes2    char(70) default ' ' not null,
  otprcod3    char(9) default ' ' not null,
  otprdes3    char(70) default ' ' not null,
  otprcod4    char(9) default ' ' not null,
  otprdes4    char(70) default ' ' not null,
  otprcod5    char(9) default ' ' not null,
  otprdes5    char(70) default ' ' not null,
  otprprb1    char(9) default ' ' not null,
  otprprb2    char(9) default ' ' not null,
  otprprb3    char(9) default ' ' not null,
  otprspar    char(50) default ' ' not null,
  lf          char(1)
);
create unique index outprca1 on outprcaf
(
otproutn
);
revoke all on outprcaf from public ; 
grant select on outprcaf to public ; 
