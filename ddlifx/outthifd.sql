create table outthiaf
(
  otthoutn    char(8) default ' ' not null,
  otthstat    char(3) default ' ' not null,
  otthrsit    char(255) default ' ' not null,
  otthrcod    char(10) default ' ' not null,
  otthradd    char(512) default ' ' not null,
  otthwurl    char(255) default ' ' not null,
  otthe164    char(20) default ' ' not null,
  otthspar    char(100) default ' ' not null,
  lf          char(1)
);
create unique index outthia1 on outthiaf
(
otthoutn
);
revoke all on outthiaf from public ; 
grant select on outthiaf to public ; 
