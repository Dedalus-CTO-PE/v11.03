create table pmslpcaf
(
pmlpuni     char(5),
pmlpadm     char(8),
pmlpurn     char(8),
pmlplpn     char(3),
pmlpcno     decimal(3,0),
pmlpstc     char(6),
pmlprep     decimal(2,0),
pmlplty     char(10),
pmlpfpn     char(3),
pmlppsc     char(4),
pmlpspa     char(23),
lf          char(1)
);
create unique index pmslpca1 on pmslpcaf
(
pmlpuni
);
revoke all on pmslpcaf from public ; 
grant select on pmslpcaf to public ; 
