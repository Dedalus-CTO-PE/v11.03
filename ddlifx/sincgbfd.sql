create table sincgbaf
(
sigbcom     char(6),
sigbdat     char(6),
sigbuam     decimal(14,2),
sigbubd     decimal(14,2),
sigbpam     decimal(14,2),
sigbpbd     decimal(14,2),
sigbram     decimal(14,2),
sigbrbd     decimal(14,2),
sigbspa     char(17),
lf          char(1)
);
create unique index sincgba1 on sincgbaf
(
sigbcom,
sigbdat
);
revoke all on sincgbaf from public ; 
grant select on sincgbaf to public ; 
