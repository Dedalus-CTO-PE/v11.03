create table ccscmnaf
(
  ccmncom     char(4) default ' ' not null,
  ccmnlin     char(3) default ' ' not null,
  ccmndat     char(78) default ' ' not null,
  ccmnspa     char(20) default ' ' not null,
  lf          char(1)
);
create unique index ccscmna1 on ccscmnaf
(
ccmncom,
ccmnlin
);
revoke all on ccscmnaf from public ; 
grant select on ccscmnaf to public ; 
