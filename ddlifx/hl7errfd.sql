create table hl7erraf
(
  derrin01    char(20) default ' ' not null,
  derrin02    char(2) default ' ' not null,
  err001      char(80) default ' ' not null,
  err002      char(100) default ' ' not null,
  lf          char(1)
);
create unique index hl7err01 on hl7erraf
(
derrin01,
derrin02
);
revoke all on hl7erraf from public ; 
grant select on hl7erraf to public ; 
