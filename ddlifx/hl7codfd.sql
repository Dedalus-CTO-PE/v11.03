create table hl7codaf
(
  hlcotid     char(4) default ' ' not null,
  hlcocod     char(10) default ' ' not null,
  hlcodes     char(60) default ' ' not null,
  hlcocat     char(2) default ' ' not null,
  hlcoicd     char(3) default ' ' not null,
  hlcobgc     char(7) default ' ' not null,
  hlcospa     char(53) default ' ' not null,
  lf          char(1)
);
create unique index hl7coda1 on hl7codaf
(
hlcotid,
hlcocod
);
revoke all on hl7codaf from public ; 
grant select on hl7codaf to public ; 
