create table webecoaf
(
  wbeohfnd    char(6) default ' ' not null,
  wbeodflg    char(1) default ' ' not null,
  wbeotrid    char(24) default ' ' not null,
  wbeoinvn    char(8) default ' ' not null,
  wbeobatn    char(8) default ' ' not null,
  wbeoctyp    char(1) default ' ' not null,
  wbeocdat    char(8) default ' ' not null,
  wbeouser    char(10) default ' ' not null,
  wbeospar    char(100) default ' ' not null,
  lf          char(1)
);
create unique index webecoa1 on webecoaf
(
wbeohfnd,
wbeodflg,
wbeotrid
);
create unique index webecoa2 on webecoaf
(
wbeocdat,
wbeodflg,
wbeotrid,
wbeohfnd
);
create unique index webecoa3 on webecoaf
(
wbeotrid,
wbeohfnd,
wbeodflg
);
revoke all on webecoaf from public ; 
grant select on webecoaf to public ; 
