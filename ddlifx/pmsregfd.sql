create table pmsregaf
(
  pmreregm    char(10) default ' ' not null,
  pmreuniq    char(3) default ' ' not null,
  pmredesc    char(40) default ' ' not null,
  pmreityp    char(1) default ' ' not null,
  pmreitmn    char(10) default ' ' not null,
  pmreactv    char(1) default ' ' not null,
  pmreelos    char(3) default ' ' not null,
  pmresncd    char(3) default ' ' not null,
  pmrebtyp    char(3) default ' ' not null,
  pmrespar    char(51) default ' ' not null,
  lf          char(1)
);
create unique index pmsrega1 on pmsregaf
(
pmreregm,
pmreuniq
);
create unique index pmsrega2 on pmsregaf
(
pmreuniq,
pmreregm
);
create unique index pmsrega3 on pmsregaf
(
pmreuniq,
pmredesc,
pmreregm
);
create unique index pmsrega4 on pmsregaf
(
pmreregm,
pmreitmn,
pmreityp,
pmreuniq
);
revoke all on pmsregaf from public ; 
grant select on pmsregaf to public ; 
