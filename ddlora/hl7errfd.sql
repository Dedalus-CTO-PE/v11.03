create table hl7erraf
(
  derrin01    varchar2(20) default ' ' not null,
  derrin02    varchar2(2) default ' ' not null,
  err001      varchar2(80) default ' ' not null,
  err002      varchar2(100) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint hl7err01 primary key( 
derrin01,
derrin02)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
