create table hl7zpnaf
(
  dzpnin01    char(20) default ' ' not null,
  zpnin02     char(3) default ' ' not null,
  dzpnin03    char(2) default ' ' not null,
  dzpnin04    char(2) default ' ' not null,
  dzpnin05    char(2) default ' ' not null,
  zpn001      char(30) default ' ' not null,
  zpn002      char(30) default ' ' not null,
  zpn003      char(30) default ' ' not null,
  zpn004      char(8) default ' ' not null,
  zpn005      char(8) default ' ' not null,
  zpn006      char(8) default ' ' not null,
  zpn007      char(2) default ' ' not null,
  zpn008      char(26) default ' ' not null,
  zpn009      char(100) default ' ' not null,
  lf          char(1)
);
create unique index hl7zpn01 on hl7zpnaf
(
dzpnin01,
zpnin02,
dzpnin03,
dzpnin04,
dzpnin05
);
revoke all on hl7zpnaf from public ; 
grant select on hl7zpnaf to public ; 
