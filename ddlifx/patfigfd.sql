create table patfigaf
(
dfinsys     char(1),
finsite     char(6),
finyear     char(4),
fintype     char(1),
fincode     char(13),
finper      decimal(14,2),
finmth1     decimal(14,2),
finmth2     decimal(14,2),
finmth3     decimal(14,2),
finmth4     decimal(14,2),
finmth5     decimal(14,2),
finmth6     decimal(14,2),
finmth7     decimal(14,2),
finmth8     decimal(14,2),
finmth9     decimal(14,2),
finmth10    decimal(14,2),
finmth11    decimal(14,2),
finmth12    decimal(14,2),
finmth13    decimal(14,2),
flstyr      decimal(14,2),
finhosp     char(3),
fspare      char(7),
lf          char(1)
);
create unique index patfiga1 on patfigaf
(
dfinsys,
finsite,
finyear,
fintype,
fincode,
finhosp
);
create unique index patfiga2 on patfigaf
(
finhosp,
dfinsys,
finsite,
finyear,
fintype,
fincode
);
revoke all on patfigaf from public ; 
grant select on patfigaf to public ; 
