create table pmsrcbaf
(
  pmrcbatc    char(8) default ' ' not null,
  pmrcadmn    char(8) default ' ' not null,
  pmrcprev    char(8) default ' ' not null,
  pmrcspar    char(92) default ' ' not null,
  lf          char(1)
);
create unique index pmsrcba1 on pmsrcbaf
(
pmrcbatc,
pmrcadmn
);
create unique index pmsrcba2 on pmsrcbaf
(
pmrcadmn,
pmrcbatc
);
revoke all on pmsrcbaf from public ; 
grant select on pmsrcbaf to public ; 
