import React, { useState } from "react";
import { Link } from "react-router-dom";
import Cookies from "js-cookie";
import { FontAwesomeIcon } from "@fortawesome/react-fontawesome";
import {
	faPlus,
	faList,
	faCircleInfo,
	faLock,
	faUser,
} from "@fortawesome/free-solid-svg-icons";

const Header = () => {
	const [isMenuOpen, setIsMenuOpen] = useState(false);

	const toggleMenu = () => {
		setIsMenuOpen(!isMenuOpen);
	};

	const usuario = Cookies.get("usuario");

	return (
		<header>
			<nav className={isMenuOpen ? "menu-open" : ""}>
				<div>
					{/* <Link to="/adiciona-enquete">
						<FontAwesomeIcon icon={faPlus} /> Enquete
					</Link> */}
					<Link to="/lista-enquete" onClick={toggleMenu}>
						<FontAwesomeIcon icon={faList} /> Enquetes
					</Link>
					<Link to="/sobre" onClick={toggleMenu}>
						<FontAwesomeIcon icon={faCircleInfo} /> Quem somos
					</Link>
					{/* <Link to="/">
						<FontAwesomeIcon icon={faHouse} /> Home
					</Link> */}
				</div>
				<div>
					{usuario !== undefined ? (
						<>
							<Link to="/adiciona-enquete" onClick={toggleMenu}>
								<FontAwesomeIcon icon={faPlus} /> Enquete
							</Link>
							<Link onClick={toggleMenu}>
								<FontAwesomeIcon icon={faUser} /> {usuario}
							</Link>
						</>
					) : (
						<Link to="/Admin" onClick={toggleMenu}>
							<FontAwesomeIcon icon={faLock} /> Admin
						</Link>
					)}
				</div>
			</nav>
			<div className="menu-icon" onClick={toggleMenu}>
				&#9776;
			</div>
		</header>
	);
};

export default Header;
