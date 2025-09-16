create table fmslmdaf
(
  fmldledg    char(2) default ' ' not null,
  fmldyear    char(4) default ' ' not null,
  fmldperd    char(2) default ' ' not null,
  fmldlno     char(3) default ' ' not null,
  fmldline    char(70) default ' ' not null,
  fmldspar    char(20) default ' ' not null,
  lf          char(1)
);
create unique index fmslmda1 on fmslmdaf
(
fmldledg,
fmldyear,
fmldperd,
fmldlno
);
revoke all on fmslmdaf from public ; 
grant select on fmslmdaf to public ; 
