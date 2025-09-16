create table fmsnrgaf
(
  fmngcode    char(3) default ' ' not null,
  fmngdesc    char(40) default ' ' not null,
  fmngcccd    char(3) default ' ' not null,
  fmngccfr    char(12) default ' ' not null,
  fmngsacd    char(3) default ' ' not null,
  fmngsafr    char(12) default ' ' not null,
  fmngrs      char(3) default ' ' not null,
  fmngpt      char(2) default ' ' not null,
  fmngclev    char(3) default ' ' not null,
  fmngslev    char(3) default ' ' not null,
  fmngcas     decimal(1,0) default 0 not null,
  fmngcbt     char(4) default ' ' not null,
  fmngpbt     char(4) default ' ' not null,
  fmngdop     decimal(1,0) default 0 not null,
  fmngzer     decimal(1,0) default 0 not null,
  fmngsupp    char(1) default ' ' not null,
  fmngshed    char(1) default ' ' not null,
  fmngpseq    decimal(1,0) default 0 not null,
  fmngpdes    char(40) default ' ' not null,
  fmngspar    char(20) default ' ' not null,
  lf          char(1)
);
create unique index fmsnrga1 on fmsnrgaf
(
fmngcode
);
revoke all on fmsnrgaf from public ; 
grant select on fmsnrgaf to public ; 
