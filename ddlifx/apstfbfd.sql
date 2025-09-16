create table apstfbaf
(
  aptfbat     char(5) default ' ' not null,
  aptftran    char(5) default ' ' not null,
  aptfdate    char(8) default ' ' not null,
  aptfspar    char(12) default ' ' not null,
  lf          char(1)
);
create unique index apstfba1 on apstfbaf
(
aptfbat
);
create unique index apstfba2 on apstfbaf
(
aptftran,
aptfbat
);
revoke all on apstfbaf from public ; 
grant select on apstfbaf to public ; 
