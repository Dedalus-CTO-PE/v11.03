create table pmsgpaaf
(
pmgpurno    char(8),
pmgpwebu    char(10),
pmgpugpc    char(10),
pmgppgpc    char(10),
pmgppprc    char(10),
pmgpovrs    char(3),
pmgpovt1    char(80),
pmgpovt2    char(80),
pmgpovt3    char(80),
pmgpovt4    char(80),
pmgpdatc    char(8),
pmgptimc    char(8),
pmgpspar    char(50),
lf          char(1)
);
create unique index pmsgpaa1 on pmsgpaaf
(
pmgpurno,
pmgpwebu,
pmgpdatc,
pmgptimc
);
create unique index pmsgpaa2 on pmsgpaaf
(
pmgpdatc,
pmgptimc,
pmgpurno,
pmgpwebu
);
revoke all on pmsgpaaf from public ; 
grant select on pmsgpaaf to public ; 
