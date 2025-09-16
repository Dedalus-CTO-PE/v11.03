create table pmshpgaf
(
pmhpatyp    char(3),
pmhpclam    char(3),
pmhpfund    char(6),
pmhptabt    char(3),
pmhpedat    char(8),
pmhpmaxi    char(3),
pmhpwari    char(3),
pmhpmaxo    char(3),
pmhpwaro    char(3),
pmhpbrko    char(1),
pmhpcdat    char(8),
pmhpctim    char(8),
pmhpcuid    char(10),
pmhpudat    char(8),
pmhputim    char(8),
pmhpuuid    char(10),
pmhpspar    char(50),
lf          char(1)
);
create unique index pmshpga1 on pmshpgaf
(
pmhpatyp,
pmhpclam,
pmhpfund,
pmhptabt,
pmhpedat
);
revoke all on pmshpgaf from public ; 
grant select on pmshpgaf to public ; 
