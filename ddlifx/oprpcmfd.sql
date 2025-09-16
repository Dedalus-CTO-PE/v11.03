create table oprpcmaf
(
  oppccode    char(6) default ' ' not null,
  oppcpref    char(9) default ' ' not null,
  oppcclss    char(3) default ' ' not null,
  doppclin    char(3) default ' ' not null,
  oppcdesc    char(70) default ' ' not null,
  oppchosp    char(3) default ' ' not null,
  oppcspar    char(50) default ' ' not null,
  lf          char(1)
);
create unique index oprpcma1 on oprpcmaf
(
oppccode,
oppcpref,
oppcclss,
doppclin,
oppchosp
);
revoke all on oprpcmaf from public ; 
grant select on oprpcmaf to public ; 
