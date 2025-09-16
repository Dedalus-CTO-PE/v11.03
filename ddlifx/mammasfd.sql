create table mammasxf
(
dmaxno      char(8),
maxheigt    decimal(3,0),
maxweigt    decimal(3,0),
maxprev     char(1),
maxdprev    char(10),
maxhyst     char(1),
maxdhyst    char(10),
maxfamly    char(1),
maxdfaml    char(10),
maxcancr    char(1),
maxdcanc    char(10),
maxsurg     char(1),
maxuser1    char(3),
maxuser2    char(3),
maxuser3    char(3),
maxuser4    char(3),
maxuser5    char(3),
maxuser6    char(3),
maxuser7    char(3),
maxuser8    char(3),
maxrdoct    char(6),
maxtesno    decimal(2,0),
maxlock     char(2),
maxfill     char(6),
lf          char(1)
);
create unique index mammasx1 on mammasxf
(
dmaxno
);
revoke all on mammasxf from public ; 
grant select on mammasxf to public ; 
