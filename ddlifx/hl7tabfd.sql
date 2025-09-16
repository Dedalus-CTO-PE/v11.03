create table hl7tabaf
(
  hltatid     char(4) default ' ' not null,
  hltades     char(40) default ' ' not null,
  hltaspa     char(60) default ' ' not null,
  lf          char(1)
);
create unique index hl7taba1 on hl7tabaf
(
hltatid
);
revoke all on hl7tabaf from public ; 
grant select on hl7tabaf to public ; 
