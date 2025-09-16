create table patfmoaf
(
ptfmhfcd    char(6),
ptfmhftb    char(8),
ptfmbtyp    char(3),
ptfmsdam    decimal(14,2),
ptfmovam    decimal(14,2),
ptfmspar    char(20),
lf          char(1)
);
create unique index patfmoa1 on patfmoaf
(
ptfmhfcd,
ptfmhftb,
ptfmbtyp
);
revoke all on patfmoaf from public ; 
grant select on patfmoaf to public ; 
