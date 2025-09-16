create table hl7outaf
(
  dh7oumes    char(20) default ' ' not null,
  h7oudttm    char(16) default ' ' not null,
  h7oumetp    char(3) default ' ' not null,
  h7ouspar    char(50) default ' ' not null,
  lf          char(1)
);
create unique index hl7out01 on hl7outaf
(
dh7oumes
);
revoke all on hl7outaf from public ; 
grant select on hl7outaf to public ; 
