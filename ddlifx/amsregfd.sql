create table amsregaf
(
  amrereg     char(2) default ' ' not null,
  amredes     char(35) default ' ' not null,
  amreur1     char(30) default ' ' not null,
  amreur2     char(30) default ' ' not null,
  amreud1     char(8) default ' ' not null,
  amreud2     char(8) default ' ' not null,
  amreuy1     char(1) default ' ' not null,
  amreuy2     char(1) default ' ' not null,
  amrespa     char(20) default ' ' not null,
  lf          char(1)
);
create unique index amsrega1 on amsregaf
(
amrereg
);
revoke all on amsregaf from public ; 
grant select on amsregaf to public ; 
