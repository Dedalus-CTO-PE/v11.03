create table webecoaf
(
  wbeohfnd    varchar2(6) default ' ' not null,
  wbeodflg    varchar2(1) default ' ' not null,
  wbeotrid    varchar2(24) default ' ' not null,
  wbeoinvn    varchar2(8) default ' ' not null,
  wbeobatn    varchar2(8) default ' ' not null,
  wbeoctyp    varchar2(1) default ' ' not null,
  wbeocdat    varchar2(8) default ' ' not null,
  wbeouser    varchar2(10) default ' ' not null,
  wbeospar    varchar2(100) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint webecoa1 primary key( 
wbeohfnd,
wbeodflg,
wbeotrid)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index webecoa2 on webecoaf
(
wbeocdat,
wbeodflg,
wbeotrid,
wbeohfnd
)
  tablespace pas_indx; 
create unique index webecoa3 on webecoaf
(
wbeotrid,
wbeohfnd,
wbeodflg
)
  tablespace pas_indx; 
