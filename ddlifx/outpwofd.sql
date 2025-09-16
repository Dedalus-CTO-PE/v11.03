create table outpwoaf
(
  otpwcntr    char(6) default ' ' not null,
  otpwtier    char(3) default ' ' not null,
  otpwpwei    decimal(14,4) default 0 not null,
  otpwcdat    char(8) default ' ' not null,
  otpwctim    char(8) default ' ' not null,
  otpwcuid    char(10) default ' ' not null,
  otpwudat    char(8) default ' ' not null,
  otpwutim    char(8) default ' ' not null,
  otpwuuid    char(10) default ' ' not null,
  otpwspar    char(100) default ' ' not null,
  lf          char(1)
);
create unique index outpwoa1 on outpwoaf
(
otpwcntr,
otpwtier
);
create unique index outpwoa2 on outpwoaf
(
otpwtier,
otpwcntr
);
revoke all on outpwoaf from public ; 
grant select on outpwoaf to public ; 
