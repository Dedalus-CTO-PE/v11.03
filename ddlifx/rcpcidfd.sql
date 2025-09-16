create table rcpcidaf
(
  rcpcash     char(6) default ' ' not null,
  rcppass     char(6) default ' ' not null,
  rcpsur      char(20) default ' ' not null,
  rcpgiven    char(20) default ' ' not null,
  rcpsecur    decimal(1,0) default 0 not null,
  rccihosp    char(3) default ' ' not null,
  rccichqa    char(15) default ' ' not null,
  rcciactv    char(1) default ' ' not null,
  rcciccrd    char(1) default ' ' not null,
  rcciinvr    char(3) default ' ' not null,
  rccidepr    char(3) default ' ' not null,
  rcci3pps    char(6) default ' ' not null,
  rccispar    char(44) default ' ' not null,
  lf          char(1)
);
create unique index rcpcida1 on rcpcidaf
(
rcpcash
);
revoke all on rcpcidaf from public ; 
grant select on rcpcidaf to public ; 
