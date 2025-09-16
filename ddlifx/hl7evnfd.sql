create table hl7evnaf
(
  devnin01    char(20) default ' ' not null,
  devnin02    char(2) default ' ' not null,
  evn001      char(3) default ' ' not null,
  evn002      char(26) default ' ' not null,
  evn003      char(26) default ' ' not null,
  evn004      char(3) default ' ' not null,
  evn005      char(60) default ' ' not null,
  evn006      char(26) default ' ' not null,
  evn007      char(100) default ' ' not null,
  lf          char(1)
);
create unique index hl7evn01 on hl7evnaf
(
devnin01,
devnin02
);
revoke all on hl7evnaf from public ; 
grant select on hl7evnaf to public ; 
