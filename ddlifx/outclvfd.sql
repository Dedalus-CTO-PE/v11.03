create table outclvaf
(
  otcvclin    char(6) default ' ' not null,
  otcvfdte    char(8) default ' ' not null,
  otcvtdte    char(8) default ' ' not null,
  otcvreas    char(3) default ' ' not null,
  otcvlast    char(8) default ' ' not null,
  otcvsite    char(6) default ' ' not null,
  otcvspar    char(24) default ' ' not null,
  lf          char(1)
);
create unique index outclva1 on outclvaf
(
otcvsite,
otcvclin,
otcvfdte
);
revoke all on outclvaf from public ; 
grant select on outclvaf to public ; 
